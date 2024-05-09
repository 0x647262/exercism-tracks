<?php

/**
 * @return array<string>
 */
function language_list(string ...$languages): array
{
    return $languages;
}

/**
 * @param  array<string>  $language_list
 * @return array<string>
 */
function add_to_language_list(array $language_list, string $language): array
{
    array_push($language_list, $language);

    return $language_list;
}

/**
 * @param  array<string>  $language_list
 * @return array<string>
 */
function prune_language_list(array $language_list): array
{
    return array_slice($language_list, 1);
}

/**
 * @param  array<string>  $language_list
 */
function current_language(array $language_list): string
{
    return $language_list[0];
}

/**
 * @param  array<string>  $language_list
 */
function language_list_length(array $language_list): int
{
    return count($language_list);
}
