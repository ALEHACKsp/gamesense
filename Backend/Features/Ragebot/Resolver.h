#pragma once
#include "../../singleton.h"
#include "../../Configuration/Config.h"
#include "../../SDK/CBaseEntity.h"
#include "..\\..\\Features\Ragebot\CAutoWall.h"
#include "../../SDK/INetChannelInfo.h"
#include <deque>
struct ResolverData
{
	float m_flFakeGoalFeetYaw;
};

extern ResolverData g_ResolverData[65];
class c_resolver : public singleton<c_resolver>
{
public:
	float pitchHit[65];
	void Resolver(CBaseEntity* player);
	void init_player_ids();
	void AnimationFix(CBaseEntity* pEnt);
	void HandleHits();
	void FrameStage(ClientFrameStage_t stage);
	int32_t m_iLayerCount = 0;
	CAnimationLayer animationLayer[15];
};