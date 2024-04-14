docker := docker run -v "${PWD}:/tmp/project" php-exercism

.PHONY: test
test:
	@$(docker) test .

.PHONY: image
image:
	@docker buildx build --load -t php-exercism ./.tools/

.PHONY: analyze
analyze: image
	@$(docker) analyze

.PHONY: format
format: image
	@$(docker) format
