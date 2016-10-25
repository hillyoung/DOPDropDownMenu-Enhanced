//
//  LKCRMClientRankDropDownMenu.h
//  LiemsMobileEnterprise
//
//  Created by luculent on 16/10/18.
//  Copyright © 2016年 Jasper. All rights reserved.
//

#import "DOPDropDownMenu.h"

@protocol LKCRMClientRankDropDownMenuDelegate <NSObject>

- (UIView *)menu:(DOPDropDownMenu *)menu viewForFooterInColumn:(NSInteger)column;

@end

@interface LKCRMClientRankDropDownMenu : DOPDropDownMenu

@property (nonatomic, weak) id <DOPDropDownMenuDelegate, LKCRMClientRankDropDownMenuDelegate> delegate;
@property (nonatomic, weak) id <DOPDropDownMenuDataSource> dataSource;

@property (nonatomic, strong) UIColor *indicatorColor;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *separatorColor;

@property (nonatomic, assign) NSInteger currentSelectedMenudIndex;
@property (nonatomic, assign) BOOL show;
@property (nonatomic, assign) NSInteger numOfMenu;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, strong) UIView *backGroundView;
@property (nonatomic, strong) UITableView *tableView;
//data source
@property (nonatomic, copy) NSArray *array;
//layers array
@property (nonatomic, copy) NSArray *titles;
@property (nonatomic, copy) NSArray *indicators;
@property (nonatomic, copy) NSArray *bgLayers;

@end
