//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDRemoteAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDFlightPreviewAction : DDRemoteAction
{
    _Bool _previewModeSet;
    NSString *_platerTitle;
}

+ (id)viewControllerProviderClass;
@property(retain) NSString *platerTitle; // @synthesize platerTitle=_platerTitle;
- (void).cxx_destruct;
- (void)setPreviewMode:(_Bool)arg1;
- (id)previewActions;
- (_Bool)wantsSeamlessCommit;
- (id)platterTitle;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;

@end

