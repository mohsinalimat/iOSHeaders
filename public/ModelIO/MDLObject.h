//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class NSArray, NSMapTable, NSString;
@protocol MDLObjectContainerComponent, MDLTransformComponent;

@interface MDLObject : NSObject <MDLNamed>
{
    MDLObject *_parent;
    NSMapTable *_components;
    MDLObject *_instance;
    _Bool _hidden;
    NSString *name;
    id <MDLObjectContainerComponent> _children;
}

@property(retain, nonatomic) id <MDLObjectContainerComponent> children; // @synthesize children=_children;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) MDLObject *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (struct)boundingBoxAtTime:(double)arg1;
- (void)addChild:(id)arg1;
@property(retain, nonatomic) id <MDLTransformComponent> transform;
- (id)objectAtPath:(id)arg1;
- (void)enumerateChildObjectsOfClass:(Class)arg1 root:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 stopPointer:(_Bool *)arg4;
@property(readonly, nonatomic) NSString *path;
@property(nonatomic) __weak MDLObject *parent;
@property(readonly, copy, nonatomic) NSArray *components;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)componentConformingToProtocol:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (id)init;

@end

