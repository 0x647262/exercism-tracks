<?php

class Size
{
    public int $height;

    public int $width;

    public function __construct(int $height, int $width)
    {
        $this->height = $height;
        $this->width = $width;
    }
}
