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
	 * Class Retraction.RetractableComponent
	 * Size -> 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
	 */
	class URetractableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_7I8V[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FeatureToggle;                                           // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRetractorOrientationAdjustmentFlags                OrientationAdjustmentOnRetractFlags;                     // 0x00F8(0x0003) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EAxis                                                      RetractorBoxAxis;                                        // 0x00FB(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldAutoReleaseOnSuccessfulRetract;                    // 0x00FC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MigrateAttachedWithRetractor;                            // 0x00FD(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasSimulatingPhysicsBeforeRetract;                       // 0x00FE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RRD8[0x1];                                   // 0x00FF(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Retraction.RetractorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URetractorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Retraction.RetractableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URetractableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Retraction.RetractableProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URetractableProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Retraction.RetractableFloatingBarrelComponent
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class URetractableFloatingBarrelComponent : public URetractableComponent
	{
	public:
		unsigned char                                              OwnerBuoyancyInterface[0x10];                            // 0x0100(0x0010) UNKNOWN PROPERTY: InterfaceProperty Retraction.RetractableFloatingBarrelComponent.OwnerBuoyancyInterface

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Retraction.RetractorComponent
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class URetractorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HG66[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AttachedRetractable[0x10];                               // 0x00D0(0x0010) UNKNOWN PROPERTY: InterfaceProperty Retraction.RetractorComponent.AttachedRetractable
		unsigned char                                              UnknownData_QZ88[0x30];                                  // 0x00E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     RetractDestinationComponent;                             // 0x0110(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RetractingComponent;                                     // 0x0118(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5HEO[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
