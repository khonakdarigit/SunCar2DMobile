using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets._2D_Car.Script.Models
{

    //{"id":"653c11c1246ad9e0e0a6eba9","userId":"Player_4690","date":"2023-10-27T19:38:41.6772755+00:00","area":"",
    //"controller":"","action":"GameManager","actionParameter":"","ip":"192.168.57.175",
    //"level":"Info","exeption":"","message":"AppStart"}

    [Serializable]
    public class Log
    {
        public string id;
        public string userId;
        public DateTimeOffset date;
        public string area;
        public string controller;
        public string action;
        public string actionParameter;
        public string ip;
        public string level;
        public string exeption;
        public string message;
        public string appName;

    }
}
