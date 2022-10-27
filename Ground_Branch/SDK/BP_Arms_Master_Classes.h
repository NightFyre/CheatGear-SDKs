#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Arms_Master.BP_Arms_Master_C
	 * Size -> 0x000B (FullSize[0x0473] - InheritedSize[0x0468])
	 */
	class ABP_Arms_Master_C : public AGBClothing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bMaskGloves;                                             // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMaskShortSleeve;                                        // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMaskLongSleeve;                                         // 0x0472(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnLoaded_2B84EE764CABC74F03D287943BBEBAD2(class UClass* Loaded);
		void UpdateSkin();
		void WatchCheck();
		void Apply();
		void OnArmsMaterialLoaded_Event(class UObject* LoadedAsset);
		void InventoryModifiersUpdated();
		void ExecuteUbergraph_BP_Arms_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
