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
	 * BlueprintGeneratedClass tls_wld_Orb_light_c.tls_wld_Orb_light_c_C
	 * Size -> 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
	 */
	class Atls_wld_Orb_light_c_C : public AStaticMeshActor
	{
	public:
		class UPointLightComponent*                                PointLight;                                              // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
