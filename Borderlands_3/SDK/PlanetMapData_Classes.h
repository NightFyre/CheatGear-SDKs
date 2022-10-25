#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PlanetMapData.PlanetMapData_C
	 * Size -> 0x0080 (FullSize[0x01A0] - InheritedSize[0x0120])
	 */
	class UPlanetMapData_C : public UPlanetData
	{
	public:
		struct FTransform                                          Desired_Local_Transform;                                 // 0x0120(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FRotator                                            Planet_Rotation;                                         // 0x0150(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FRotator                                            Light_Direction;                                         // 0x015C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FLinearColor                                        Sun_Light_Color;                                         // 0x0168(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sun_Brightness;                                          // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sun_Radius;                                              // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Initial_Rotation;                                        // 0x0180(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FRotator                                            TriGrid_Rotation;                                        // 0x018C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		int32_t                                                    Seed;                                                    // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Seed2;                                                   // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
