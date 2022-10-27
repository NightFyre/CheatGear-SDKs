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
	 * Class RenderToTexture.RenderToTextureFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URenderToTextureFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class URenderToTextureSceneDetails* STATIC_GetRenderToTexture(const class FName& Identifier);
		class URenderToTextureSceneDetails* STATIC_CreateRenderToTexture(class UObject* WorldContext, const class FName& Identifier, class UClass* ClassToSpawn, const struct FIntPoint& Resolution, bool bForceLinearGamma, bool bCaptureAlpha);
		static UClass* StaticClass();
	};

	/**
	 * Class RenderToTexture.RenderToTextureSceneDetails
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class URenderToTextureSceneDetails : public UObject
	{
	public:
		class UClass*                                              ClassToSpawn;                                            // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           Resolution;                                              // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		class UWorld*                                              World;                                                   // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TWeakObjectPtr<class UWorld>                               ParentWorld;                                             // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper
		TWeakObjectPtr<class AActor>                               SpawnedActor;                                            // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VE1X[0x50];                                  // 0x0058(0x0050) MISSED OFFSET (PADDING)

	public:
		class UTextureRenderTarget2D* GetTexture();
		class AActor* GetInstance();
		void DestroyTexture();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
