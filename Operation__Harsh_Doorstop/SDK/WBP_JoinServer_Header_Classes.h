#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_JoinServer_Header.WBP_JoinServer_Header_C
	 * Size -> 0x0059 (FullSize[0x0289] - InheritedSize[0x0230])
	 */
	class UWBP_JoinServer_Header_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          HeaderText;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FDataTableRowHandle                                 LayoutInfoHandle;                                        // 0x0240(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn
		struct FFServerListingLayoutInfo                           HeaderLayoutInfo;                                        // 0x0250(0x0038) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bSortListBtnEnabled;                                     // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetSortBtnIsEnabled(bool bEnabled);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_JoinServer_Header(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
