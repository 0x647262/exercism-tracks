class AssemblyLine
  CARS_PER_HOUR = 221

  def initialize(speed)
    @speed = speed
    case @speed
    when 10
      @success_rate = 0.77
    when 9
      @success_rate = 0.80
    when 5..8
      @success_rate = 0.90
    else
      @success_rate = 1.00
    end
  end

  def production_rate_per_hour
    return @speed * CARS_PER_HOUR * @success_rate
  end

  def working_items_per_minute
    return (production_rate_per_hour / 60).to_i
  end
end
