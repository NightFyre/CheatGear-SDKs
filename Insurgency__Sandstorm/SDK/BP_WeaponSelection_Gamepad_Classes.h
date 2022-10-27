#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C
	 * Size -> 0x0011 (FullSize[0x02B9] - InheritedSize[0x02A8])
	 */
	class UBP_WeaponSelection_Gamepad_C : public UWeaponSelection_Gamepad
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_2;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Temp;                                                    // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPlatformIcon(class UTexture2D** NewParam);
		void RebuildItemListNew();
		void BumpFadeTimer(float Seconds);
		void CreateOptionForItem(class AItemEquipable* Item, EItemSlot Slot);
		void Construct();
		void ExecuteUbergraph_BP_WeaponSelection_Gamepad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
