FROM php:8.3-cli

# hadolint ignore=DL3008
RUN                                                \
  apt-get update                                   \
  && apt-get install --no-install-recommends --yes \
    git                                            \
    libzip-dev                                     \
    unzip                                          \
    zip                                            \
  && rm -rf /var/lib/apt/lists/*

RUN                               \
  pecl install opcache xdebug zip \
  && docker-php-ext-enable opcache xdebug zip

RUN useradd --create-home php
USER php

WORKDIR /opt/composer
RUN chown php:php /opt/composer
COPY --chown=php:php composer-installer /opt/composer
RUN                           \
  chmod +x composer-installer \
  && ./composer-installer     \
  && rm -v composer-installer
RUN \
  php composer.phar require --dev --prefer-stable laravel/pint       \
  && php composer.phar require --dev --prefer-stable phpstan/phpstan \
  && php composer.phar require --dev --prefer-stable phpunit/phpunit


# hadolint ignore=DL3002
USER root
COPY analyze /usr/local/bin
COPY format /usr/local/bin
COPY test /usr/local/bin
ENV PATH="/opt/composer/vendor/bin:$PATH"
WORKDIR /tmp/project
