//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <KnowledgeGraphKit/MANode.h>

@class NSString;

@interface MAAbstractNode : MANode
{
    NSString *_labelString;
}

- (void).cxx_destruct;
- (void)_setLabelString:(id)arg1;
- (unsigned short)_label;
- (id)_labelKey;
- (id)label;
- (_Bool)isAbstract;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabelString:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)initWithLabel:(unsigned short)arg1 domain:(unsigned short)arg2 weight:(float)arg3;

@end

