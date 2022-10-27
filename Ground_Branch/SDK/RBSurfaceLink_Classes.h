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
	 * Class RBSurfaceLink.RBSurfaceLink
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class URBSurfaceLink : public UObject
	{
	public:
		class FName                                                Type;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LinkedClass;                                             // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCosmeticOnly;                                           // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URHC[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBSurfaceLink.RBSurfaceLinkActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URBSurfaceLinkActorInterface : public UInterface
	{
	public:
		class FName GetSurfaceLinkType(class UPrimitiveComponent* InCollisionComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class RBSurfaceLink.RBSurfaceLinkClassInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URBSurfaceLinkClassInterface : public UInterface
	{
	public:
		void SetPhysicCollisionInfo(class AActor* InSourceActor, class UPrimitiveComponent* InSourceComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& InContactPosition, const struct FVector& InContactNormal);
		void SetHitResult(class UObject* InHitResultSource, const struct FHitResult& InHitResult);
		static UClass* StaticClass();
	};

	/**
	 * Class RBSurfaceLink.RBSurfaceLinkManager
	 * Size -> 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
	 */
	class URBSurfaceLinkManager : public UObject
	{
	public:
		class UObjectLibrary*                                      SurfaceLinkLibrary;                                      // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TIFU[0x138];                                 // 0x0030(0x0138) MISSED OFFSET (PADDING)

	public:
		class UClass* GetLinkedClassFromHitResult(const class FName& Type, const struct FHitResult& HitResult);
		class UClass* GetLinkedClass(const class FName& Type, const class FName& PhysicalMaterialName);
		class UClass* GetDefaultLinkedClass(const class FName& Type);
		static UClass* StaticClass();
	};

	/**
	 * Class RBSurfaceLink.RBSurfaceLinkSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URBSurfaceLinkSettings : public UObject
	{
	public:
		TArray<class FString>                                      Paths;                                                   // 0x0028(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
