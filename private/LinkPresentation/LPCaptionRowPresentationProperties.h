//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCaptionPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject
{
    LPCaptionPresentationProperties *_leading;
    LPCaptionPresentationProperties *_trailing;
}

@property(readonly, retain, nonatomic) LPCaptionPresentationProperties *trailing; // @synthesize trailing=_trailing;
@property(readonly, retain, nonatomic) LPCaptionPresentationProperties *leading; // @synthesize leading=_leading;
- (void).cxx_destruct;
- (id)right;
- (id)left;
- (id)init;

@end

