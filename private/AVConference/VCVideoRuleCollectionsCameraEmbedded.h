//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;
- (_Bool)setupRules;
- (_Bool)setupH264Rules;
- (_Bool)setupH264WifiRulesWithEncodingType:(unsigned char)arg1 formatList:(struct _VCVideoFormat *)arg2 formatListCount:(unsigned int)arg3 preferredFormat:(id)arg4 supportsHighDef:(_Bool *)arg5;
- (struct _VCHardwareConfiguration *)hardwareConfiguration;
- (double)preferredAspectRatio;
- (void)initSupportedPayloads;
- (void)dealloc;
- (id)initWithHardwareSettings:(id)arg1;

@end

