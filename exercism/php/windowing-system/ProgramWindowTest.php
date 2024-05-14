<?php

class ProgramWindowTest extends PHPUnit\Framework\TestCase
{
    public static function setUpBeforeClass(): void
    {
        require_once 'ProgramWindow.php';
    }

    /**
     * @testdox assert ProgramWindow has a $y property
     *
     * @task_id 1
     */
    public function testHasPropertyY()
    {
        $this->assertobjecthasproperty('y', new programwindow());
    }

    /**
     * @testdox assert ProgramWindow has a $x property
     *
     * @task_id 1
     */
    public function testHasPropertyX()
    {
        $this->assertobjecthasproperty('x', new programwindow());
    }

    /**
     * @testdox assert ProgramWindow has a $height property
     *
     * @task_id 1
     */
    public function testHasPropertyHeight()
    {
        $this->assertobjecthasproperty('height', new programwindow());
    }

    /**
     * @testdox assert ProgramWindow has a $width property
     *
     * @task_id 1
     */
    public function testHasPropertyWidth()
    {
        $this->assertobjecthasproperty('width', new programwindow());
    }

    /**
     * @testdox assert ProgramWindow has a constructor initial values
     *
     * @task_id 2
     */
    public function testHasConstructorSettingInitialValues()
    {
        $window = new ProgramWindow();
        $this->assertEquals(0, $window->y);
        $this->assertEquals(0, $window->x);
        $this->assertEquals(600, $window->height);
        $this->assertEquals(800, $window->width);
    }

    /**
     * @testdox assert Position class exists, with constructor, properties
     *
     * @task_id 3
     */
    public function testSizeHasConstructorSettingInitialValues()
    {
        $size = new Size(300, 700);
        $this->assertEquals(300, $size->height);
        $this->assertEquals(700, $size->width);
    }

    /**
     * @testdox assert ProgramWindow::resize function exists
     *
     * @task_id 3
     */
    public function testProgramWindowResize()
    {
        $window = new ProgramWindow();
        $size = new Size(430, 2135);
        $window->resize($size);
        $this->assertEquals(430, $window->height);
        $this->assertEquals(2135, $window->width);
    }

    /**
     * @testdox assert Position class exists, with constructor, properties
     *
     * @task_id 4
     */
    public function testPositionHasConstructorSettingInitialValues()
    {
        $position = new Position(30, 70);
        $this->assertEquals(30, $position->y);
        $this->assertEquals(70, $position->x);
    }

    /**
     * @testdox assert ProgramWindow::move function exists
     *
     * @task_id 4
     */
    public function testProgramWindowMove()
    {
        $window = new ProgramWindow();
        $position = new Position(40, 235);
        $window->move($position);
        $this->assertEquals(40, $window->y);
        $this->assertEquals(235, $window->x);
    }
}
