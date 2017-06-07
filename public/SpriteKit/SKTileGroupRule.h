//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>
#import <SpriteKit/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, SKTileGroup;

@interface SKTileGroupRule : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_tileDefinitions;
    NSMutableArray *_tileDefinitionIDs;
    unsigned char _adjacency;
    NSString *_name;
    SKTileGroup *_parentGroup;
}

+ (id)tileGroupRuleWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2;
@property(nonatomic) __weak SKTileGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setTileDefinitionsFromIDsWithTileSet:(id)arg1;
- (void)calcTileDefinitionIDsWithTileSet:(id)arg1;
- (id)initWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTileDefinitionParentPointers;
- (void)setTileDefinitionIDs:(id)arg1;
@property(readonly, nonatomic) NSArray *tileDefinitionIDs;
@property(copy, nonatomic) NSArray *tileDefinitions;
@property(nonatomic) unsigned long long adjacency;

@end
