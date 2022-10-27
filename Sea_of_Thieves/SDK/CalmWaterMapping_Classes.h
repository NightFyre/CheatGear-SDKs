#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class CalmWaterMapping.CalmWaterMappingInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCalmWaterMappingInterface : public UInterface
	{
	public:
		float GetDampeningFactor(const struct FVector2D& InPosition);
		float GetChoppinessFactor(const struct FVector2D& InPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class CalmWaterMapping.AthenaCalmWaterZone
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class AAthenaCalmWaterZone : public ACalmWaterZone
	{
	public:
		unsigned char                                              UnknownData_Z4EL[0x20];                                  // 0x03D0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CalmWaterMapping.CalmWaterMappingService
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UCalmWaterMappingService : public UObject
	{
	public:
		unsigned char                                              UnknownData_CNZF[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		float STATIC_GetMaxWindSpeed();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
