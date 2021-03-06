//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class WNParagraphCellView, WNParagraphInfo;

@interface WNArticleTableViewCell : MMTableViewCell
{
    WNParagraphCellView *m_cellView;
    WNParagraphInfo *paraInfo;
    id <WNParaCellViewDelegate> delegate;
}

+ (double)getCellHeightOfParaInfo:(id)arg1;
+ (double)getTextHeightForLast:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WNParaCellViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) WNParagraphInfo *paraInfo; // @synthesize paraInfo;

@end

