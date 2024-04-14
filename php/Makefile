docker := docker run -v "${PWD}:/tmp/project" php-exercism

.PHONY: test
test:
	@$(docker) ./vendor/bin/phpunit

.PHONY: image
image:
	@docker buildx build --load -t php-exercism ./.tools/

.PHONY: phpstan
phpstan:
	@$(docker) analyze

.PHONY: psalm
psalm:
	@$(docker) ./vendor/bin/psalm

.PHONY: analyze
analyze: image phpstan psalm

.PHONY: format
format: image
	@$(docker) format
