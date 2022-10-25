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
	 * Class HarbourFramework.HarbourInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHarbourInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HarbourFramework.HarbourComponent
	 * Size -> 0x0030 (FullSize[0x0310] - InheritedSize[0x02E0])
	 */
	class UHarbourComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_XX4H[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HarbourRadiusInCentimetres;                              // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P0F4[0x24];                                  // 0x02EC(0x0024) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HarbourFramework.HarbourServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHarbourServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HarbourFramework.HarbourService
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHarbourService : public UObject
	{
	public:
		unsigned char                                              UnknownData_S44Q[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
