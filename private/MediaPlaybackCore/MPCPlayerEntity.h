//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlayerItemContainer, MPModelPlayEvent, NSDictionary, NSString;

@interface MPCPlayerEntity : NSObject
{
    _Bool _explicit;
    MPCPlayerItemContainer *_container;
    NSString *_title;
    NSDictionary *_userInfo;
    MPModelPlayEvent *_modelPlayEventRepresentation;
}

@property(readonly, nonatomic) MPModelPlayEvent *modelPlayEventRepresentation; // @synthesize modelPlayEventRepresentation=_modelPlayEventRepresentation;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit; // @synthesize explicit=_explicit;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak MPCPlayerItemContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)artworkCatalog;

@end

