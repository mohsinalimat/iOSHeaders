//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextElementAction.h>

@class NTKUpNextElementContent;

@interface NTKUpNextElementDisplayAction : NTKUpNextElementAction
{
    NTKUpNextElementContent *_content;
}

@property(readonly, nonatomic) NTKUpNextElementContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContent:(id)arg1;
- (id)init;

@end
