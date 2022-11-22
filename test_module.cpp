void AStar::StartNodeSet()
{
    int so_x = rand()%(10 - 0 + 1) + 0;
    int so_y = rand()%(30 - 0 + 1) + 0;

    for (int i = 1; i <= 9; i++)
    {
        if(i <= 3)
        {
            start_set_[i].x_ = so_x + i - 1;
            start_set_[i].y_ = so_y;
        }
        else if(i > 3 && i <= 6)
        {
            start_set_[i].x_ = start_set_[i - 3].x_;
            start_set_[i].y_ = so_y + 1;
        }
        else if(i > 6 && i < 10)
        {
            start_set_[i].x_ = start_set_[i - 3].x_;
            start_set_[i].y_ = so_y + 2;
        }
    }
}

void AStar::EndNodeSet()
{
    int si_x = rand()%(30 - 20 + 1) + 10;
    int si_y = rand()%(24 - 4 + 1) + 4;

    for(int i = 1; i <= 9; i++)
    {
        if(i <= 3)
        {
            end_set_[i].x_ = si_x + i - 1;
            end_set_[i].y_ = si_y;
        }
        else if(i > 3 && i <= 6)
        {
            end_set_[i].x_ = end_set_[i - 3].x_;
            end_set_[i].y_ = si_y + 1;
        }
        else if(i > 6 && i <= 9)
        {
            end_set_[i].x_ = end_set_[i - 3].x_;
            end_set_[i].y_ = si_y + 2;
        }
    }
}
