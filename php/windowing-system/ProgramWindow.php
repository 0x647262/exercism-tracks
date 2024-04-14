<?php

require_once 'Size.php';
require_once 'Position.php';

class ProgramWindow
{
    public int $x;

    public int $y;

    public int $height;

    public int $width;

    public function __construct()
    {
        $this->x = 0;
        $this->y = 0;
        $this->height = 600;
        $this->width = 800;
    }

    public function resize(Size $size): void
    {
        $this->height = $size->height;
        $this->width = $size->width;
    }

    public function move(Position $position): void
    {
        $this->x = $position->x;
        $this->y = $position->y;
    }
}
