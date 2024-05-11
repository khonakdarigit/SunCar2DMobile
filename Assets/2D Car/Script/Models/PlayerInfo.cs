using Realms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets._2D_Car.Script.Models
{
    [System.Serializable]

    public class PlayerInfo : RealmObject
    {
        [PrimaryKey]
        public string gamerTag { get; set; }
        public string UserName { get; set; }
        public RealmInteger<int> Record { get; set; }
        public int Coin { get; set; }
        public int Dim { get; set; }
        public string API_DB_userID { get; set; }
        public bool GameMute { get; set; }
        public string Last_Stage { get; set; }
        public string Last_Vehicle { get; set; }
        public bool ShowAd { get; set; }
        //public IList<MapStatus> lstMapStatus { get; }
    }
}
