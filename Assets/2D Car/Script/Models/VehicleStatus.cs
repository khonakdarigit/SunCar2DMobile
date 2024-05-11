
using MongoDB.Bson;
using Realms;

namespace Assets._2D_Car.Script.Models
{
    [System.Serializable]

    public class VehicleStatus : RealmObject
    {

        public ObjectId Id { get; set; } = ObjectId.GenerateNewId();
        public string Name { get; set; }
        public bool Lock { get; set; }
        public int TuneLevel { get; set; }
        public int TuneLevelUserSave { get; set; }
        public int BestRecord { get; set; }
    }
}
