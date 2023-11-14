float problemSolution1(float consumed_water) {
    const float fixedAmount = 13.0;
    const float r1 = 0.4;
    const float r2 = 0.12;
    const float r3 = 1.4;
    const float addRate = 1.5;
    float cost = 0.0;
    if (consumed_water <= 30) {
        cost = fixedAmount + consumed_water * r1;
    } else if (consumed_water <= 50) {
        cost = fixedAmount + 30 * r1 + (consumed_water - 30) * r2;
    } else if (consumed_water <= 60) {
        cost = fixedAmount + 30 * r1 + 20 * r2 + (consumed_water - 50) * r3;
    } else {
        cost = fixedAmount + 30 * r1 + 20 * r2 + 10 * r3 + (consumed_water - 60) * addRate;
    }

    return cost;
}
