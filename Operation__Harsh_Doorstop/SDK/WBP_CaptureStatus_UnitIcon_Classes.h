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
	 * WidgetBlueprintGeneratedClass WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C
	 * Size -> 0x0280 (FullSize[0x04B0] - InheritedSize[0x0230])
	 */
	class UWBP_CaptureStatus_UnitIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              UnitIcon;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ECaptureUnitType                                           UnitType;                                                // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_8F7A[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         UnoccupiedUnitImage;                                     // 0x0248(0x0088) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateBrush                                         FriendlyUnitImage;                                       // 0x02D0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateBrush                                         EnemyUnitImage;                                          // 0x0358(0x0088) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateBrush                                         MultipleUnitImage;                                       // 0x03E0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly
		bool                                                       bUseFriendlyUnitColor;                                   // 0x0468(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M27X[0x3];                                   // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        UnoccupiedUnitColor;                                     // 0x046C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FriendlyUnitColor;                                       // 0x047C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        EnemyUnitColor;                                          // 0x048C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUnitMultiple;                                           // 0x049C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bIsDesignTime;                                           // 0x049D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C6UC[0x2];                                   // 0x049E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        LocalUnitColorToUse;                                     // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIsMultipleUnit(bool bNewUnitMultiple);
		void SetUnitType(ECaptureUnitType NewUnitType);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_CaptureStatus_UnitIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
