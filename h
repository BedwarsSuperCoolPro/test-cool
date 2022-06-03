if not game:IsLoaded() then 
    game.Loaded:Wait()
end 

local Time = tick()

while tick() - Time >= 20 do 
    game.ReplicatedStorage.DefaultChatSystemChatEvents.SayMessageRequest:FireServer()
end 
