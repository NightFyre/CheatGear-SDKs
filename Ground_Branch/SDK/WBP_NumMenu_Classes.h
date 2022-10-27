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
	 * WidgetBlueprintGeneratedClass WBP_NumMenu.WBP_NumMenu_C
	 * Size -> 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
	 */
	class UWBP_NumMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_28;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_25;                                            // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Entries;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                Title;                                                   // 0x0290(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class FText>                                        Entries;                                                 // 0x02A8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bAddExit;                                                // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_2MCT[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Exit;                                                    // 0x02C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKey>                                        NumberKeys;                                              // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool OverrideInputAxis(const struct FKey& Key, float Delta, float DeltaTime, int32_t NumSamples, bool bGamepad);
		bool OverrideInputKey(const struct FKey& Key, EBPInputEvent EventType, float AmountDepressed, bool bGamepad);
		void Construct();
		void Destruct();
		void ExecuteUbergraph_WBP_NumMenu(int32_t EntryPoint);
		void OnSelected__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
