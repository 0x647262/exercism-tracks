<?php

function language_list(...$languages): array
{
    return $languages;
}

function add_to_language_list(array $language_list, string $language): array
{
    array_push($language_list, $language);
    return $language_list;
}

function prune_language_list(array $language_list): array
{
    return array_slice($language_list, 1);
}

function current_language(array $language_list)
{
    return $language_list[0];
}

function language_list_length(array $language_list)
{
    return sizeof($language_list);
}