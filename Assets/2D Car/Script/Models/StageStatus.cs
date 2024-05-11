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

    public class StageStatus : RealmObject
    {

        public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
        public string Name { get; set; }
        public bool Lock { get; set; }

    }
}
