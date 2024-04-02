defmodule BirdCount do
  def today([]) do
    nil
  end

  def today(list) do
    [head | _] = list
    head
  end

  def increment_day_count([]) do
    [1]
  end

  def increment_day_count(list) do
    [_ | tail] = list
    [today(list) + 1 | tail]
  end

  def has_day_without_birds?([]) do
    false
  end

  def has_day_without_birds?(list) do
    [head | tail] = list
    cond do
      head > 0 ->
        has_day_without_birds?(tail)
      :default ->
        true
    end
  end

  def total([]) do
    0
  end

  def total(list) do
    [head | tail] = list
    head + total(tail)
  end

  def busy_days([]) do
    0
  end

  def busy_days(list) do
    [head | tail] = list
    cond do
      head >= 5 ->
        1 + busy_days(tail)
      :default ->
        busy_days(tail)
    end
  end
end
