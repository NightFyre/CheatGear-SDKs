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
	 * Class WorldLocationPopUpFramework.WorldLocationPopUpComponent
	 * Size -> 0x0080 (FullSize[0x0360] - InheritedSize[0x02E0])
	 */
	class UWorldLocationPopUpComponent : public USceneComponent
	{
	public:
		class UWorldLocationPopUpDataAsset*                        PopUpData;                                               // 0x02E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UShapeComponent*                                     LocationOverlapVolume;                                   // 0x02E8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LocationCooldown;                                        // 0x02F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AlwaysShowPopUp;                                         // 0x02F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6HHE[0x6B];                                  // 0x02F5(0x006B) MISSED OFFSET (PADDING)

	public:
		void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class WorldLocationPopUpFramework.WorldLocationPopUpDataAsset
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UWorldLocationPopUpDataAsset : public UDataAsset
	{
	public:
		class FName                                                Id;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               BannerIcon;                                              // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FText                                                DisplayText;                                             // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_D7XN[0x20];                                  // 0x0058(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UPopUpAudioDesc*                                     AudioOverride;                                           // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WorldLocationPopUpFramework.WorldLocationVisitorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWorldLocationVisitorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WorldLocationPopUpFramework.WorldLocationVisitorComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UWorldLocationVisitorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ZBAZ[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RevisitCooldown;                                         // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B78Y[0x34];                                  // 0x00D4(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
