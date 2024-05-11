﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets._2D_Car.Script.Models
{
    [Serializable]
    public class GameScoreApi
    {
        public string id;
        public int score;
        public DateTime date;
        public string gameuserid;
    }
}
