//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCRecommendedCategory : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSArray *_topicTagIDs;
    NSArray *_channelTagIDs;
    NSArray *_subcategories;
    NSArray *_curatedTagIDs;
}

@property(readonly, nonatomic) NSArray *curatedTagIDs; // @synthesize curatedTagIDs=_curatedTagIDs;
@property(readonly, nonatomic) NSArray *subcategories; // @synthesize subcategories=_subcategories;
@property(readonly, nonatomic) NSArray *channelTagIDs; // @synthesize channelTagIDs=_channelTagIDs;
@property(readonly, nonatomic) NSArray *topicTagIDs; // @synthesize topicTagIDs=_topicTagIDs;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 curatedTagIDs:(id)arg3 recommendedTopicTagIDs:(id)arg4 recommendedChannelTagIDs:(id)arg5 subcategories:(id)arg6;

@end

