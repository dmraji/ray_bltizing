// Occupied voxel data, bound to each occupied voxel in hash table

#ifndef occ_data_hh
#define occ_data_hh

struct occ_data
{
  int hits;
  float probability;
  bool mask;
  int sr_extent;

  occ_data() : hits(0),
               probability(0.0f),
               mask(false),
               sr_extent(1)
               {}
};

#endif