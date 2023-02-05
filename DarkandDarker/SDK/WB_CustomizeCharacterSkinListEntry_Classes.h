#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_CustomizeCharacterSkinListEntry.WB_CustomizeCharacterSkinListEntry_C
	 * Size -> 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
	 */
	class UWB_CustomizeCharacterSkinListEntry_C : public UDCCharacterSkinListEntryWidget
	{
	public:
		class UImage*                                              Image_FrameEquipped;                                     // 0x03A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Hover;                                             // 0x03B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_CharacterSkinIcon;                                   // 0x03B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_CharacterSkinSlot;                               // 0x03C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		ESlateVisibility Get_Image_FrameEquipped_Visibility();
		ESlateVisibility Get_Image_Hover_Visibility();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
