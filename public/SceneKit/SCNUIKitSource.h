//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

@interface SCNUIKitSource : SCNImageSource
{
    id _uiView;
    id _uiWindow;
}

@property(retain, nonatomic) id uiWindow; // @synthesize uiWindow=_uiWindow;
@property(retain, nonatomic) id uiView; // @synthesize uiView=_uiView;
- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSource;
- (id)prepareWindowIfNeeded;
- (id)init;

@end

