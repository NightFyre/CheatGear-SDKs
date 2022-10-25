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
	 * Class Tethering.CordRenderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCordRenderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.CordRenderComponent
	 * Size -> 0x0038 (FullSize[0x0658] - InheritedSize[0x0620])
	 */
	class UCordRenderComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_QI48[0x8];                                   // 0x0620(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    CordMaterials;                                           // 0x0628(0x0010) ZeroConstructor, Transient, Protected
		float                                                      ThicknessCm;                                             // 0x0638(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_5LPJ[0x1C];                                  // 0x063C(0x001C) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.DynamicCordRenderComponent
	 * Size -> 0x0068 (FullSize[0x06C0] - InheritedSize[0x0658])
	 */
	class UDynamicCordRenderComponent : public UCordRenderComponent
	{
	public:
		unsigned char                                              UnknownData_FKRJ[0x8];                                   // 0x0658(0x0008) Fix Super Size
		class USceneComponent*                                     EndPointA;                                               // 0x0660(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     EndPointB;                                               // 0x0668(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T9SX[0x50];                                  // 0x0670(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetCordEndPointB(class USceneComponent* EndPointB);
		void SetCordEndPointA(class USceneComponent* EndPointA);
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.HarpoonRenderComponent
	 * Size -> 0x0028 (FullSize[0x0680] - InheritedSize[0x0658])
	 */
	class UHarpoonRenderComponent : public UCordRenderComponent
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    HarpoonMaterials;                                        // 0x0658(0x0010) ZeroConstructor, Transient
		float                                                      LaunchAnimationDurationSecs;                             // 0x0668(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitAnimationDurationSecs;                                // 0x066C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      QuickRetractAnimationSpeed;                              // 0x0670(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RFHN[0xC];                                   // 0x0674(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.TetherConstraintInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTetherConstraintInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.DistanceJointComponent
	 * Size -> 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
	 */
	class UDistanceJointComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_AH1W[0x70];                                  // 0x00C8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistance;                                             // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistance;                                             // 0x013C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpringStiffness;                                         // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpringDamping;                                           // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyAsSpring;                                           // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EnforceMinDistance;                                      // 0x0149(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EnforceMaxDistance;                                      // 0x014A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85QH[0x5];                                   // 0x014B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.ShouldTetherInWorldSpaceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShouldTetherInWorldSpaceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.TetherQueriableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTetherQueriableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.TetherCustomisationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTetherCustomisationInterface : public UTetherQueriableInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.TetherInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTetherInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.Tether
	 * Size -> 0x0140 (FullSize[0x0508] - InheritedSize[0x03C8])
	 */
	class ATether : public AActor
	{
	public:
		unsigned char                                              UnknownData_98RJ[0xF8];                                  // 0x03C8(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TetherPositionAnchorComponent;                           // 0x04C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    SourcePhysicsHandle;                                     // 0x04C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    TargetPhysicsHandle;                                     // 0x04D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDistanceJointComponent*                             JointComponent;                                          // 0x04D8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              SourceActor;                                             // 0x04E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TargetActor;                                             // 0x04E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SlackCm;                                                 // 0x04F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxLengthWhenGrowing;                                    // 0x04F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6MEL[0x8];                                   // 0x04F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       HasAttached;                                             // 0x0500(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       HasSourceActor;                                          // 0x0501(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       HasTargetActor;                                          // 0x0502(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       IsSlackEnabled;                                          // 0x0503(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		ETetherConstrainMode                                       CurrentTetherMode;                                       // 0x0504(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_USMY[0x3];                                   // 0x0505(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.TetherCustomisationComponent
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class UTetherCustomisationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TKE1[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     ComponentToTetherTo;                                     // 0x00D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4WLK[0x48];                                  // 0x00D8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MassIntertiaScale;                                       // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBeTethered;                                           // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsMassInertiaScalingEnabled;                             // 0x0125(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SNGT[0x2];                                   // 0x0126(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Tethering.TetherInWorldSpaceComponent
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UTetherInWorldSpaceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_CYF5[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
