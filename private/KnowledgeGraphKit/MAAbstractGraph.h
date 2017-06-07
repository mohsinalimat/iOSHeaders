//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <KnowledgeGraphKit/MAGraph.h>

@interface MAAbstractGraph : MAGraph
{
}

+ (Class)edgeClass;
+ (Class)nodeClass;
- (id)_keyForLabelString:(id)arg1;
- (id)_labelStrings;
- (void)_setLabelStrings:(id)arg1;
- (unsigned short)_labelForString:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)_stringForLabel:(unsigned short)arg1;
- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithPersistentStoreURL:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithGraphMLURL:(id)arg1;
- (id)initWithDataURL:(id)arg1;

@end

