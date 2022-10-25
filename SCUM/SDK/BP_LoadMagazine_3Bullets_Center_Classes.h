#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UBP_LoadMagazine_3Bullets_Center_C : public UItemActionSequenceLoadMagazine
	{
	public:
		class FName                                                StartSectionOneLoadedBullet;                             // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                StartSectionTwoOrMoreLoadedBullets;                      // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EndSectionEmpty;                                         // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EndSectionOneLoadedBullet;                               // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EndSectionTwoLoadedBullets;                              // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FName GetEndSectionName();
		float Begin();
		bool CanBeSelected(class UItemActionDescription* Description);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
