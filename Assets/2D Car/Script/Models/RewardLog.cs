using MongoDB.Bson;
using Realms;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets._2D_Car.Script.Models
{
    [System.Serializable]

    public class RewardLog : RealmObject
    {
        public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
        public DateTimeOffset Date { get; set; }
    }
}
