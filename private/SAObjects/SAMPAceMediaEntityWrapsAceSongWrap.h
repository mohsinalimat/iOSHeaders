//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAMPSong.h>

#import <SAObjects/SASyncWrap-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SAMPAceMediaEntityWrapsAceSongWrap : SAMPSong <SASyncWrap>
{
}

+ (id)aceMediaEntityWrapsAceSongWrapWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceMediaEntityWrapsAceSongWrap;
@property(copy, nonatomic) NSNumber *generation;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end

