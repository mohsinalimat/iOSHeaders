//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKitUI/CLKUIResourceManager.h>

@class EAGLContext, EAGLSharegroup, NSMutableDictionary;

@interface CLKUIGLResourceManager : CLKUIResourceManager
{
    NSMutableDictionary *_programsByName;
    EAGLContext *_context;
    EAGLSharegroup *_shareGroup;
}

+ (id)programWithName:(id)arg1;
+ (id)shareGroup;
+ (id)sharedGLInstance;
- (void).cxx_destruct;
- (void)_purgeTextures:(id)arg1;
- (id)_newTextureForUuid:(id)arg1;
- (id)init;

@end

