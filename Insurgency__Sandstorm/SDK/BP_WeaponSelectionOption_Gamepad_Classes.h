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
	 * WidgetBlueprintGeneratedClass BP_WeaponSelectionOption_Gamepad.BP_WeaponSelectionOption_Gamepad_C
	 * Size -> 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
	 */
	class UBP_WeaponSelectionOption_Gamepad_C : public UWeaponSelectionOption_Gamepad
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		struct FSlateBrush Get_Image_0_Brush_1();
		struct FLinearColor GetBgColor();
		struct FSlateColor GetTextColor();
		class FText GetSlotNumber();
		class FText GetItemName();
		void Construct();
		void ExecuteUbergraph_BP_WeaponSelectionOption_Gamepad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
