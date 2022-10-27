#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RenderToTexture.RenderToTextureFunctionLibrary.GetRenderToTexture
	 */
	struct URenderToTextureFunctionLibrary_GetRenderToTexture_Params
	{
	public:
		class FName                                                Identifier;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URenderToTextureSceneDetails*                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RenderToTexture.RenderToTextureFunctionLibrary.CreateRenderToTexture
	 */
	struct URenderToTextureFunctionLibrary_CreateRenderToTexture_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Identifier;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ClassToSpawn;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIntPoint                                           Resolution;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceLinearGamma;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCaptureAlpha;                                           // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRJG[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URenderToTextureSceneDetails*                        ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RenderToTexture.RenderToTextureSceneDetails.GetTexture
	 */
	struct URenderToTextureSceneDetails_GetTexture_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RenderToTexture.RenderToTextureSceneDetails.GetInstance
	 */
	struct URenderToTextureSceneDetails_GetInstance_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RenderToTexture.RenderToTextureSceneDetails.DestroyTexture
	 */
	struct URenderToTextureSceneDetails_DestroyTexture_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
