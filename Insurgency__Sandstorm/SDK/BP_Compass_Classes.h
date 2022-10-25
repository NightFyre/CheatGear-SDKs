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
	 * WidgetBlueprintGeneratedClass BP_Compass.BP_Compass_C
	 * Size -> 0x0048 (FullSize[0x02F0] - InheritedSize[0x02A8])
	 */
	class UBP_Compass_C : public UCompassHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Background;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_CompassMarker_C*                                 BP_CompassMarker;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_CompassMarker_C*                                 BP_CompassMarker_1;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_CompassMarker_C*                                 BP_CompassMarker_2;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CompassCanvas;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VerticalDivide;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UBP_CompassMarker_C*>                         MarkerWidgets;                                           // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void OnMarkerExpired(class UBP_CompassMarker_C* MarkerWidget);
		void AddCompassMarker(struct FVector* DestinationLocation, ECompassMarkerType Type, class AActor* FollowActor);
		void Construct();
		void AddCompassMarkerEvent(const struct FVector& WorldLocation, class AActor* FollowActor, ECompassMarkerType MarkerType);
		void UpdateMarkerAngle(const struct FVector& CameraLocation, const struct FRotator& CameraRotation);
		void ExecuteUbergraph_BP_Compass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
